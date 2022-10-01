// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTRESPONSE_H
#define QTAWS_UPDATECOMPONENTRESPONSE_H

#include "protonresponse.h"
#include "updatecomponentrequest.h"

namespace QtAws {
namespace Proton {

class UpdateComponentResponsePrivate;

class QTAWSPROTON_EXPORT UpdateComponentResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateComponentResponse(const UpdateComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateComponentResponse)
    Q_DISABLE_COPY(UpdateComponentResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
