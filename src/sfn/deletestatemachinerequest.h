// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTATEMACHINEREQUEST_H
#define QTAWS_DELETESTATEMACHINEREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class DeleteStateMachineRequestPrivate;

class QTAWSSFN_EXPORT DeleteStateMachineRequest : public SfnRequest {

public:
    DeleteStateMachineRequest(const DeleteStateMachineRequest &other);
    DeleteStateMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
