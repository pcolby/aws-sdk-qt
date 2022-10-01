// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXECUTIONHISTORYREQUEST_H
#define QTAWS_GETEXECUTIONHISTORYREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class GetExecutionHistoryRequestPrivate;

class QTAWSSFN_EXPORT GetExecutionHistoryRequest : public SfnRequest {

public:
    GetExecutionHistoryRequest(const GetExecutionHistoryRequest &other);
    GetExecutionHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExecutionHistoryRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
