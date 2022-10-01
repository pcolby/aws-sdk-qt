// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKTEAMRESPONSE_H
#define QTAWS_DESCRIBEWORKTEAMRESPONSE_H

#include "sagemakerresponse.h"
#include "describeworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkteamResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeWorkteamResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeWorkteamResponse(const DescribeWorkteamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkteamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkteamResponse)
    Q_DISABLE_COPY(DescribeWorkteamResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
