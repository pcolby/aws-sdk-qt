// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAPRESPONSE_H
#define QTAWS_DELETEMAPRESPONSE_H

#include "locationresponse.h"
#include "deletemaprequest.h"

namespace QtAws {
namespace Location {

class DeleteMapResponsePrivate;

class QTAWSLOCATION_EXPORT DeleteMapResponse : public LocationResponse {
    Q_OBJECT

public:
    DeleteMapResponse(const DeleteMapRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMapRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMapResponse)
    Q_DISABLE_COPY(DeleteMapResponse)

};

} // namespace Location
} // namespace QtAws

#endif
