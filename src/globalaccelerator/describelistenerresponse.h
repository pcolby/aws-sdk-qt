// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERRESPONSE_H
#define QTAWS_DESCRIBELISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describelistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeListenerResponse(const DescribeListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeListenerResponse)
    Q_DISABLE_COPY(DescribeListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
