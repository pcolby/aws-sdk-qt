// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHTYPERESPONSE_H
#define QTAWS_PUBLISHTYPERESPONSE_H

#include "cloudformationresponse.h"
#include "publishtyperequest.h"

namespace QtAws {
namespace CloudFormation {

class PublishTypeResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT PublishTypeResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    PublishTypeResponse(const PublishTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishTypeResponse)
    Q_DISABLE_COPY(PublishTypeResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
