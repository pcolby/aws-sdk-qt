// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENGINEVERSIONSREQUEST_H
#define QTAWS_LISTENGINEVERSIONSREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListEngineVersionsRequestPrivate;

class QTAWSATHENA_EXPORT ListEngineVersionsRequest : public AthenaRequest {

public:
    ListEngineVersionsRequest(const ListEngineVersionsRequest &other);
    ListEngineVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEngineVersionsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
