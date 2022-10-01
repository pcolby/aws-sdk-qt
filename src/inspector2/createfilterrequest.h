// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILTERREQUEST_H
#define QTAWS_CREATEFILTERREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class CreateFilterRequestPrivate;

class QTAWSINSPECTOR2_EXPORT CreateFilterRequest : public Inspector2Request {

public:
    CreateFilterRequest(const CreateFilterRequest &other);
    CreateFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFilterRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
