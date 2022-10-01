// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTALSREQUEST_H
#define QTAWS_LISTPORTALSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListPortalsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT ListPortalsRequest : public WorkSpacesWebRequest {

public:
    ListPortalsRequest(const ListPortalsRequest &other);
    ListPortalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortalsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
