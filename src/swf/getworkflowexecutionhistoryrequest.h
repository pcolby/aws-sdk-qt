// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWEXECUTIONHISTORYREQUEST_H
#define QTAWS_GETWORKFLOWEXECUTIONHISTORYREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class GetWorkflowExecutionHistoryRequestPrivate;

class QTAWSSWF_EXPORT GetWorkflowExecutionHistoryRequest : public SwfRequest {

public:
    GetWorkflowExecutionHistoryRequest(const GetWorkflowExecutionHistoryRequest &other);
    GetWorkflowExecutionHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowExecutionHistoryRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
