// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_H

#include "chimeresponse.h"
#include "describeappinstanceadminrequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceAdminResponsePrivate;

class QTAWSCHIME_EXPORT DescribeAppInstanceAdminResponse : public ChimeResponse {
    Q_OBJECT

public:
    DescribeAppInstanceAdminResponse(const DescribeAppInstanceAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppInstanceAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceAdminResponse)
    Q_DISABLE_COPY(DescribeAppInstanceAdminResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
