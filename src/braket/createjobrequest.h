// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBREQUEST_H
#define QTAWS_CREATEJOBREQUEST_H

#include "braketrequest.h"

namespace QtAws {
namespace Braket {

class CreateJobRequestPrivate;

class QTAWSBRAKET_EXPORT CreateJobRequest : public BraketRequest {

public:
    CreateJobRequest(const CreateJobRequest &other);
    CreateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
