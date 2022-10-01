// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCRIPTRESPONSE_H
#define QTAWS_DESCRIBESCRIPTRESPONSE_H

#include "gameliftresponse.h"
#include "describescriptrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeScriptResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeScriptResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeScriptResponse(const DescribeScriptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScriptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScriptResponse)
    Q_DISABLE_COPY(DescribeScriptResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
