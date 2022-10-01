// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYRESPONSE_H
#define QTAWS_GETREPOSITORYRESPONSE_H

#include "protonresponse.h"
#include "getrepositoryrequest.h"

namespace QtAws {
namespace Proton {

class GetRepositoryResponsePrivate;

class QTAWSPROTON_EXPORT GetRepositoryResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetRepositoryResponse(const GetRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryResponse)
    Q_DISABLE_COPY(GetRepositoryResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
