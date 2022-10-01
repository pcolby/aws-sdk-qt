// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYTYPERESPONSE_H
#define QTAWS_DESCRIBEACTIVITYTYPERESPONSE_H

#include "swfresponse.h"
#include "describeactivitytyperequest.h"

namespace QtAws {
namespace Swf {

class DescribeActivityTypeResponsePrivate;

class QTAWSSWF_EXPORT DescribeActivityTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    DescribeActivityTypeResponse(const DescribeActivityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeActivityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivityTypeResponse)
    Q_DISABLE_COPY(DescribeActivityTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
