// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTEREVENTTOPICRESPONSE_H
#define QTAWS_REGISTEREVENTTOPICRESPONSE_H

#include "directoryserviceresponse.h"
#include "registereventtopicrequest.h"

namespace QtAws {
namespace DirectoryService {

class RegisterEventTopicResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT RegisterEventTopicResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    RegisterEventTopicResponse(const RegisterEventTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterEventTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterEventTopicResponse)
    Q_DISABLE_COPY(RegisterEventTopicResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
