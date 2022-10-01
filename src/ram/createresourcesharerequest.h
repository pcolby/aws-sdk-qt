// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESHAREREQUEST_H
#define QTAWS_CREATERESOURCESHAREREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class CreateResourceShareRequestPrivate;

class QTAWSRAM_EXPORT CreateResourceShareRequest : public RamRequest {

public:
    CreateResourceShareRequest(const CreateResourceShareRequest &other);
    CreateResourceShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
