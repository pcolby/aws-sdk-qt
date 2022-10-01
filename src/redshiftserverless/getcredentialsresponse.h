// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSRESPONSE_H
#define QTAWS_GETCREDENTIALSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getcredentialsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetCredentialsResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetCredentialsResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetCredentialsResponse(const GetCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCredentialsResponse)
    Q_DISABLE_COPY(GetCredentialsResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
