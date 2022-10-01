// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALIASRESPONSE_H
#define QTAWS_DESCRIBEALIASRESPONSE_H

#include "gameliftresponse.h"
#include "describealiasrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeAliasResponsePrivate;

class QTAWSGAMELIFT_EXPORT DescribeAliasResponse : public GameLiftResponse {
    Q_OBJECT

public:
    DescribeAliasResponse(const DescribeAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAliasResponse)
    Q_DISABLE_COPY(DescribeAliasResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
