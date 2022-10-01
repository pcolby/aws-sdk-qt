// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEXECUTIONREQUEST_H
#define QTAWS_STOPEXECUTIONREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class StopExecutionRequestPrivate;

class QTAWSSFN_EXPORT StopExecutionRequest : public SfnRequest {

public:
    StopExecutionRequest(const StopExecutionRequest &other);
    StopExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
