// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODEGROUPVERSIONRESPONSE_H
#define QTAWS_UPDATENODEGROUPVERSIONRESPONSE_H

#include "eksresponse.h"
#include "updatenodegroupversionrequest.h"

namespace QtAws {
namespace Eks {

class UpdateNodegroupVersionResponsePrivate;

class QTAWSEKS_EXPORT UpdateNodegroupVersionResponse : public EksResponse {
    Q_OBJECT

public:
    UpdateNodegroupVersionResponse(const UpdateNodegroupVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNodegroupVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNodegroupVersionResponse)
    Q_DISABLE_COPY(UpdateNodegroupVersionResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
