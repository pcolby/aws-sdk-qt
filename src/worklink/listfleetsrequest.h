// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFLEETSREQUEST_H
#define QTAWS_LISTFLEETSREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class ListFleetsRequestPrivate;

class QTAWSWORKLINK_EXPORT ListFleetsRequest : public WorkLinkRequest {

public:
    ListFleetsRequest(const ListFleetsRequest &other);
    ListFleetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFleetsRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
