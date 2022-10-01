// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXECUTIONREQUEST_H
#define QTAWS_STARTEXECUTIONREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class StartExecutionRequestPrivate;

class QTAWSSFN_EXPORT StartExecutionRequest : public SfnRequest {

public:
    StartExecutionRequest(const StartExecutionRequest &other);
    StartExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
