// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATURERESPONSE_H
#define QTAWS_UPDATEFEATURERESPONSE_H

#include "evidentlyresponse.h"
#include "updatefeaturerequest.h"

namespace QtAws {
namespace Evidently {

class UpdateFeatureResponsePrivate;

class QTAWSEVIDENTLY_EXPORT UpdateFeatureResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    UpdateFeatureResponse(const UpdateFeatureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFeatureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFeatureResponse)
    Q_DISABLE_COPY(UpdateFeatureResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
