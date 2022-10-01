// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEATURERESPONSE_H
#define QTAWS_GETFEATURERESPONSE_H

#include "evidentlyresponse.h"
#include "getfeaturerequest.h"

namespace QtAws {
namespace Evidently {

class GetFeatureResponsePrivate;

class QTAWSEVIDENTLY_EXPORT GetFeatureResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    GetFeatureResponse(const GetFeatureRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFeatureRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFeatureResponse)
    Q_DISABLE_COPY(GetFeatureResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
