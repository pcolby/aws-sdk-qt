// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIBEDWORKTEAMRESPONSE_H
#define QTAWS_DESCRIBESUBSCRIBEDWORKTEAMRESPONSE_H

#include "sagemakerresponse.h"
#include "describesubscribedworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeSubscribedWorkteamResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeSubscribedWorkteamResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeSubscribedWorkteamResponse(const DescribeSubscribedWorkteamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSubscribedWorkteamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscribedWorkteamResponse)
    Q_DISABLE_COPY(DescribeSubscribedWorkteamResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
