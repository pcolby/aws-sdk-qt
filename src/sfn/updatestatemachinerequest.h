// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTATEMACHINEREQUEST_H
#define QTAWS_UPDATESTATEMACHINEREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class UpdateStateMachineRequestPrivate;

class QTAWSSFN_EXPORT UpdateStateMachineRequest : public SfnRequest {

public:
    UpdateStateMachineRequest(const UpdateStateMachineRequest &other);
    UpdateStateMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
