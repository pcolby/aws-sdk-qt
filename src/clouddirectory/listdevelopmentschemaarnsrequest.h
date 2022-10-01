// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVELOPMENTSCHEMAARNSREQUEST_H
#define QTAWS_LISTDEVELOPMENTSCHEMAARNSREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDevelopmentSchemaArnsRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListDevelopmentSchemaArnsRequest : public CloudDirectoryRequest {

public:
    ListDevelopmentSchemaArnsRequest(const ListDevelopmentSchemaArnsRequest &other);
    ListDevelopmentSchemaArnsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevelopmentSchemaArnsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
