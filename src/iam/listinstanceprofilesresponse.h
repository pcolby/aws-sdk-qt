// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESRESPONSE_H
#define QTAWS_LISTINSTANCEPROFILESRESPONSE_H

#include "iamresponse.h"
#include "listinstanceprofilesrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesResponsePrivate;

class QTAWSIAM_EXPORT ListInstanceProfilesResponse : public IamResponse {
    Q_OBJECT

public:
    ListInstanceProfilesResponse(const ListInstanceProfilesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceProfilesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceProfilesResponse)
    Q_DISABLE_COPY(ListInstanceProfilesResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
