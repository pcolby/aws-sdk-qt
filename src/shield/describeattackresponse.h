// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKRESPONSE_H
#define QTAWS_DESCRIBEATTACKRESPONSE_H

#include "shieldresponse.h"
#include "describeattackrequest.h"

namespace QtAws {
namespace Shield {

class DescribeAttackResponsePrivate;

class QTAWSSHIELD_EXPORT DescribeAttackResponse : public ShieldResponse {
    Q_OBJECT

public:
    DescribeAttackResponse(const DescribeAttackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAttackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAttackResponse)
    Q_DISABLE_COPY(DescribeAttackResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
