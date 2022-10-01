// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATURERESPONSE_H
#define QTAWS_CREATEFEATURERESPONSE_H

#include "evidentlyresponse.h"
#include "createfeaturerequest.h"

namespace QtAws {
namespace Evidently {

class CreateFeatureResponsePrivate;

class QTAWSEVIDENTLY_EXPORT CreateFeatureResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    CreateFeatureResponse(const CreateFeatureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFeatureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFeatureResponse)
    Q_DISABLE_COPY(CreateFeatureResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
