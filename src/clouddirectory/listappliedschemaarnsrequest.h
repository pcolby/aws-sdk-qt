// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLIEDSCHEMAARNSREQUEST_H
#define QTAWS_LISTAPPLIEDSCHEMAARNSREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListAppliedSchemaArnsRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListAppliedSchemaArnsRequest : public CloudDirectoryRequest {

public:
    ListAppliedSchemaArnsRequest(const ListAppliedSchemaArnsRequest &other);
    ListAppliedSchemaArnsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppliedSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
