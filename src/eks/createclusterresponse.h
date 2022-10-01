// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLUSTERRESPONSE_H
#define QTAWS_CREATECLUSTERRESPONSE_H

#include "eksresponse.h"
#include "createclusterrequest.h"

namespace QtAws {
namespace Eks {

class CreateClusterResponsePrivate;

class QTAWSEKS_EXPORT CreateClusterResponse : public EksResponse {
    Q_OBJECT

public:
    CreateClusterResponse(const CreateClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClusterResponse)
    Q_DISABLE_COPY(CreateClusterResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
