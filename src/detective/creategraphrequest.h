// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHREQUEST_H
#define QTAWS_CREATEGRAPHREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class CreateGraphRequestPrivate;

class QTAWSDETECTIVE_EXPORT CreateGraphRequest : public DetectiveRequest {

public:
    CreateGraphRequest(const CreateGraphRequest &other);
    CreateGraphRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGraphRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
