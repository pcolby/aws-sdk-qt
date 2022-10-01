// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTEREVENTTOPICRESPONSE_H
#define QTAWS_DEREGISTEREVENTTOPICRESPONSE_H

#include "directoryserviceresponse.h"
#include "deregistereventtopicrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterEventTopicResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeregisterEventTopicResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DeregisterEventTopicResponse(const DeregisterEventTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterEventTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterEventTopicResponse)
    Q_DISABLE_COPY(DeregisterEventTopicResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
