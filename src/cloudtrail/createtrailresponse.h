// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAILRESPONSE_H
#define QTAWS_CREATETRAILRESPONSE_H

#include "cloudtrailresponse.h"
#include "createtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class CreateTrailResponsePrivate;

class QTAWSCLOUDTRAIL_EXPORT CreateTrailResponse : public CloudTrailResponse {
    Q_OBJECT

public:
    CreateTrailResponse(const CreateTrailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrailResponse)
    Q_DISABLE_COPY(CreateTrailResponse)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
