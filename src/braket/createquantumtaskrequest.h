// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUANTUMTASKREQUEST_H
#define QTAWS_CREATEQUANTUMTASKREQUEST_H

#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class CreateQuantumTaskRequestPrivate;

class QTAWSBRAKET_EXPORT CreateQuantumTaskRequest : public BraketRequest {

public:
    CreateQuantumTaskRequest(const CreateQuantumTaskRequest &other);
    CreateQuantumTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
