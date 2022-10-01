// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERRESPONSE_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERRESPONSE_H

#include "chimeresponse.h"
#include "describeappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceUserResponsePrivate;

class QTAWSCHIME_EXPORT DescribeAppInstanceUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    DescribeAppInstanceUserResponse(const DescribeAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceUserResponse)
    Q_DISABLE_COPY(DescribeAppInstanceUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
