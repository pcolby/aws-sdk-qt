// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESREQUEST_H
#define QTAWS_SEARCHTABLESREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class SearchTablesRequestPrivate;

class QTAWSGLUE_EXPORT SearchTablesRequest : public GlueRequest {

public:
    SearchTablesRequest(const SearchTablesRequest &other);
    SearchTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTablesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
