// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTATEMACHINEREQUEST_H
#define QTAWS_CREATESTATEMACHINEREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class CreateStateMachineRequestPrivate;

class QTAWSSFN_EXPORT CreateStateMachineRequest : public SfnRequest {

public:
    CreateStateMachineRequest(const CreateStateMachineRequest &other);
    CreateStateMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
