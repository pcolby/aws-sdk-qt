// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUANTUMTASKREQUEST_H
#define QTAWS_GETQUANTUMTASKREQUEST_H

#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class GetQuantumTaskRequestPrivate;

class QTAWSBRAKET_EXPORT GetQuantumTaskRequest : public BraketRequest {

public:
    GetQuantumTaskRequest(const GetQuantumTaskRequest &other);
    GetQuantumTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
