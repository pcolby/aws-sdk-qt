// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWTYPERESPONSE_H
#define QTAWS_DESCRIBEWORKFLOWTYPERESPONSE_H

#include "swfresponse.h"
#include "describeworkflowtyperequest.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowTypeResponsePrivate;

class QTAWSSWF_EXPORT DescribeWorkflowTypeResponse : public SwfResponse {
    Q_OBJECT

public:
    DescribeWorkflowTypeResponse(const DescribeWorkflowTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeWorkflowTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkflowTypeResponse)
    Q_DISABLE_COPY(DescribeWorkflowTypeResponse)

};

} // namespace Swf
} // namespace QtAws

#endif
