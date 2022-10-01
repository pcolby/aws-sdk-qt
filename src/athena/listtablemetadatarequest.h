// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTABLEMETADATAREQUEST_H
#define QTAWS_LISTTABLEMETADATAREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListTableMetadataRequestPrivate;

class QTAWSATHENA_EXPORT ListTableMetadataRequest : public AthenaRequest {

public:
    ListTableMetadataRequest(const ListTableMetadataRequest &other);
    ListTableMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTableMetadataRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
