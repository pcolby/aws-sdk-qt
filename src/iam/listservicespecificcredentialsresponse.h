// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICESPECIFICCREDENTIALSRESPONSE_H
#define QTAWS_LISTSERVICESPECIFICCREDENTIALSRESPONSE_H

#include "iamresponse.h"
#include "listservicespecificcredentialsrequest.h"

namespace QtAws {
namespace Iam {

class ListServiceSpecificCredentialsResponsePrivate;

class QTAWSIAM_EXPORT ListServiceSpecificCredentialsResponse : public IamResponse {
    Q_OBJECT

public:
    ListServiceSpecificCredentialsResponse(const ListServiceSpecificCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServiceSpecificCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServiceSpecificCredentialsResponse)
    Q_DISABLE_COPY(ListServiceSpecificCredentialsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
