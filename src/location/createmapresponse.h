// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAPRESPONSE_H
#define QTAWS_CREATEMAPRESPONSE_H

#include "locationresponse.h"
#include "createmaprequest.h"

namespace QtAws {
namespace Location {

class CreateMapResponsePrivate;

class QTAWSLOCATION_EXPORT CreateMapResponse : public LocationResponse {
    Q_OBJECT

public:
    CreateMapResponse(const CreateMapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMapResponse)
    Q_DISABLE_COPY(CreateMapResponse)

};

} // namespace Location
} // namespace QtAws

#endif
