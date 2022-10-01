// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESFORROLERESPONSE_H
#define QTAWS_LISTINSTANCEPROFILESFORROLERESPONSE_H

#include "iamresponse.h"
#include "listinstanceprofilesforrolerequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesForRoleResponsePrivate;

class QTAWSIAM_EXPORT ListInstanceProfilesForRoleResponse : public IamResponse {
    Q_OBJECT

public:
    ListInstanceProfilesForRoleResponse(const ListInstanceProfilesForRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceProfilesForRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceProfilesForRoleResponse)
    Q_DISABLE_COPY(ListInstanceProfilesForRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
