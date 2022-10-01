// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCERESPONSE_H
#define QTAWS_DESCRIBEAPPINSTANCERESPONSE_H

#include "chimeresponse.h"
#include "describeappinstancerequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceResponsePrivate;

class QTAWSCHIME_EXPORT DescribeAppInstanceResponse : public ChimeResponse {
    Q_OBJECT

public:
    DescribeAppInstanceResponse(const DescribeAppInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceResponse)
    Q_DISABLE_COPY(DescribeAppInstanceResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
