// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUANTUMTASKREQUEST_H
#define QTAWS_CANCELQUANTUMTASKREQUEST_H

#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class CancelQuantumTaskRequestPrivate;

class QTAWSBRAKET_EXPORT CancelQuantumTaskRequest : public BraketRequest {

public:
    CancelQuantumTaskRequest(const CancelQuantumTaskRequest &other);
    CancelQuantumTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
