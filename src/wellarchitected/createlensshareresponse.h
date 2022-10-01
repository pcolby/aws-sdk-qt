// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSSHARERESPONSE_H
#define QTAWS_CREATELENSSHARERESPONSE_H

#include "wellarchitectedresponse.h"
#include "createlenssharerequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensShareResponsePrivate;

class QTAWSWELLARCHITECTED_EXPORT CreateLensShareResponse : public WellArchitectedResponse {
    Q_OBJECT

public:
    CreateLensShareResponse(const CreateLensShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLensShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLensShareResponse)
    Q_DISABLE_COPY(CreateLensShareResponse)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
