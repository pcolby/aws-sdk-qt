// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERREQUEST_H
#define QTAWS_DELETEFILTERREQUEST_H

#include "inspector2request.h"

namespace QtAws {
namespace Inspector2 {

class DeleteFilterRequestPrivate;

class QTAWSINSPECTOR2_EXPORT DeleteFilterRequest : public Inspector2Request {

public:
    DeleteFilterRequest(const DeleteFilterRequest &other);
    DeleteFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFilterRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
