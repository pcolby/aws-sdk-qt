// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYSYNCDEFINITIONSRESPONSE_H
#define QTAWS_LISTREPOSITORYSYNCDEFINITIONSRESPONSE_H

#include "protonresponse.h"
#include "listrepositorysyncdefinitionsrequest.h"

namespace QtAws {
namespace Proton {

class ListRepositorySyncDefinitionsResponsePrivate;

class QTAWSPROTON_EXPORT ListRepositorySyncDefinitionsResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListRepositorySyncDefinitionsResponse(const ListRepositorySyncDefinitionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRepositorySyncDefinitionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositorySyncDefinitionsResponse)
    Q_DISABLE_COPY(ListRepositorySyncDefinitionsResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
