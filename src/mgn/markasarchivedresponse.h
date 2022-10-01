// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKASARCHIVEDRESPONSE_H
#define QTAWS_MARKASARCHIVEDRESPONSE_H

#include "mgnresponse.h"
#include "markasarchivedrequest.h"

namespace QtAws {
namespace Mgn {

class MarkAsArchivedResponsePrivate;

class QTAWSMGN_EXPORT MarkAsArchivedResponse : public MgnResponse {
    Q_OBJECT

public:
    MarkAsArchivedResponse(const MarkAsArchivedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MarkAsArchivedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarkAsArchivedResponse)
    Q_DISABLE_COPY(MarkAsArchivedResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
