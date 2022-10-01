// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDHANDLERPROGRESSRESPONSE_H
#define QTAWS_RECORDHANDLERPROGRESSRESPONSE_H

#include "cloudformationresponse.h"
#include "recordhandlerprogressrequest.h"

namespace QtAws {
namespace CloudFormation {

class RecordHandlerProgressResponsePrivate;

class QTAWSCLOUDFORMATION_EXPORT RecordHandlerProgressResponse : public CloudFormationResponse {
    Q_OBJECT

public:
    RecordHandlerProgressResponse(const RecordHandlerProgressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RecordHandlerProgressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecordHandlerProgressResponse)
    Q_DISABLE_COPY(RecordHandlerProgressResponse)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
