// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODEGROUPRESPONSE_H
#define QTAWS_CREATENODEGROUPRESPONSE_H

#include "eksresponse.h"
#include "createnodegrouprequest.h"

namespace QtAws {
namespace Eks {

class CreateNodegroupResponsePrivate;

class QTAWSEKS_EXPORT CreateNodegroupResponse : public EksResponse {
    Q_OBJECT

public:
    CreateNodegroupResponse(const CreateNodegroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNodegroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNodegroupResponse)
    Q_DISABLE_COPY(CreateNodegroupResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
