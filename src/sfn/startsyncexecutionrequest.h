// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSYNCEXECUTIONREQUEST_H
#define QTAWS_STARTSYNCEXECUTIONREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class StartSyncExecutionRequestPrivate;

class QTAWSSFN_EXPORT StartSyncExecutionRequest : public SfnRequest {

public:
    StartSyncExecutionRequest(const StartSyncExecutionRequest &other);
    StartSyncExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSyncExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
